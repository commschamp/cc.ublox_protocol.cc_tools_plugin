// Generated by commsdsl2tools_qt v6.3.4

#include "MonVer.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonVer.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_swVersion(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonVerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SwVersion;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_hwVersion(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonVerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HwVersion;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct ListMembers
{
    static QVariantMap createProps_extension(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonVerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Extension;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonVerFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_extension(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_swVersion(false));
    props.append(createProps_hwVersion(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class MonVerImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonVer<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonVerImpl
    >
{
public:
    MonVerImpl() = default;
    MonVerImpl(const MonVerImpl&) = delete;
    MonVerImpl(MonVerImpl&&) = delete;
    virtual ~MonVerImpl() = default;
    MonVerImpl& operator=(const MonVerImpl&) = default;
    MonVerImpl& operator=(MonVerImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonVer::MonVer() : m_pImpl(new MonVerImpl) {}
MonVer::~MonVer() = default;

MonVer& MonVer::operator=(const MonVer& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonVer& MonVer::operator=(MonVer&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonVer::MsgIdParamType MonVer::doGetId()
{
    return ::cc_ublox::message::MonVer<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonVer::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonVer::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonVer::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonVer::resetImpl()
{
    m_pImpl->reset();
}

bool MonVer::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonVer*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonVer::MsgIdParamType MonVer::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonVer::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonVer::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonVer::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonVer::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonVer::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
