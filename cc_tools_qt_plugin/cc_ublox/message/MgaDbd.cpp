// Generated by commsdsl2tools_qt v6.3.0

#include "MgaDbd.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaDbd.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

struct Reserved1Members
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MgaDbdFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1Members::Element;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
        return props;
    }
}; // struct Reserved1Members

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaDbdFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(Reserved1Members::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaDbdFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Data;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_reserved1(false));
    props.append(createProps_data(false));
    return props;
}

} // namespace

class MgaDbdImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaDbd<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaDbdImpl
    >
{
public:
    MgaDbdImpl() = default;
    MgaDbdImpl(const MgaDbdImpl&) = delete;
    MgaDbdImpl(MgaDbdImpl&&) = delete;
    virtual ~MgaDbdImpl() = default;
    MgaDbdImpl& operator=(const MgaDbdImpl&) = default;
    MgaDbdImpl& operator=(MgaDbdImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaDbd::MgaDbd() : m_pImpl(new MgaDbdImpl) {}
MgaDbd::~MgaDbd() = default;

MgaDbd& MgaDbd::operator=(const MgaDbd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaDbd& MgaDbd::operator=(MgaDbd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaDbd::MsgIdParamType MgaDbd::doGetId()
{
    return ::cc_ublox::message::MgaDbd<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaDbd::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaDbd::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaDbd::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaDbd::resetImpl()
{
    m_pImpl->reset();
}

bool MgaDbd::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaDbd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaDbd::MsgIdParamType MgaDbd::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaDbd::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaDbd::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaDbd::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaDbd::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaDbd::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
