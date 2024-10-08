// Generated by commsdsl2tools_qt v6.3.4

#include "MgaGpsHealth.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaGpsHealth.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsHealthFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsHealthFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsHealthFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_healthCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsHealthFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HealthCode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsHealthFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_healthCode(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class MgaGpsHealthImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaGpsHealth<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaGpsHealthImpl
    >
{
public:
    MgaGpsHealthImpl() = default;
    MgaGpsHealthImpl(const MgaGpsHealthImpl&) = delete;
    MgaGpsHealthImpl(MgaGpsHealthImpl&&) = delete;
    virtual ~MgaGpsHealthImpl() = default;
    MgaGpsHealthImpl& operator=(const MgaGpsHealthImpl&) = default;
    MgaGpsHealthImpl& operator=(MgaGpsHealthImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsHealth::MgaGpsHealth() : m_pImpl(new MgaGpsHealthImpl) {}
MgaGpsHealth::~MgaGpsHealth() = default;

MgaGpsHealth& MgaGpsHealth::operator=(const MgaGpsHealth& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsHealth& MgaGpsHealth::operator=(MgaGpsHealth&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaGpsHealth::MsgIdParamType MgaGpsHealth::doGetId()
{
    return ::cc_ublox::message::MgaGpsHealth<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaGpsHealth::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsHealth::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsHealth::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsHealth::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsHealth::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsHealth*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsHealth::MsgIdParamType MgaGpsHealth::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsHealth::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsHealth::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsHealth::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsHealth::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsHealth::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
