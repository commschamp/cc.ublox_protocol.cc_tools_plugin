// Generated by commsdsl2tools_qt v6.3.4

#include "MgaAno.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Day.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Month.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaAno.h"

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
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gnssId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GnssId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_year(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Year;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_month(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Month;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_month(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_day(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Day;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_day(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Data;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAnoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_svid(false));
    props.append(createProps_gnssId(false));
    props.append(createProps_year(false));
    props.append(createProps_month(false));
    props.append(createProps_day(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_data(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class MgaAnoImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaAno<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaAnoImpl
    >
{
public:
    MgaAnoImpl() = default;
    MgaAnoImpl(const MgaAnoImpl&) = delete;
    MgaAnoImpl(MgaAnoImpl&&) = delete;
    virtual ~MgaAnoImpl() = default;
    MgaAnoImpl& operator=(const MgaAnoImpl&) = default;
    MgaAnoImpl& operator=(MgaAnoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaAno::MgaAno() : m_pImpl(new MgaAnoImpl) {}
MgaAno::~MgaAno() = default;

MgaAno& MgaAno::operator=(const MgaAno& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaAno& MgaAno::operator=(MgaAno&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaAno::MsgIdParamType MgaAno::doGetId()
{
    return ::cc_ublox::message::MgaAno<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaAno::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaAno::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaAno::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaAno::resetImpl()
{
    m_pImpl->reset();
}

bool MgaAno::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaAno*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaAno::MsgIdParamType MgaAno::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaAno::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaAno::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaAno::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaAno::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaAno::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
